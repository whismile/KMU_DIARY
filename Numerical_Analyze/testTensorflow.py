import tensorflow as tf
import numpy as np

# Feeding datas
x_data = [1, 2, 3]
y_data = [1, 2, 3]

# 1-D weight and 1-D bias
W = tf.Variable(tf.random_uniform([1], -1.0, 1.0))
b = tf.Variable(tf.random_uniform([1], -1.0, 1.0))

# placeholder of feature datas
X = tf.placeholder(tf.float32, name="X")
Y = tf.placeholder(tf.float32, name="Y")

# Polynomial(linear combination) for predict ouput & cost/loss
hypothesis = X * W + b
cost = tf.reduce_mean(tf.square(hypothesis - Y))

# optimizer node
optimizer = tf.train.GradientDescentOptimizer(learning_rate=0.01)
train = optimizer.minimize(cost)

# Iteration train with convex cost function
with tf.Session() as sess:
    sess.run(tf.global_variables_initializer())

    for step in range(100):
        _, costValue = sess.run([train, cost], feed_dict={X: x_data, Y: y_data})

        print("Step{}'s cost value -> {}".format(step, costValue))
