import streamlit as st
import pandas

st.set_page_config(layout="wide")

st.header("The Best Company")
placeholder = """
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. 
Sed arcu non odio euismod lacinia at quis. At augue eget arcu dictum varius. Turpis tincidunt id aliquet risus feugiat. 
Ante in nibh mauris cursus mattis. Magnis dis parturient montes nascetur ridiculus mus mauris. Scelerisque eu ultrices 
vitae auctor eu augue ut lectus arcu. Praesent elementum facilisis leo vel. Quisque non tellus orci ac. 
Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque.
"""
st.write(placeholder)
st.subheader("Our Team")

col1, col2, col3 = st.columns(3)

dataflow = pandas.read_csv("data.csv")

with col1:
    for index, row in dataflow[:4].iterrows():
        st.header(f"{row['first name'].capitalize()} {row['last name'].capitalize()}")
        st.write(row['role'])
        st.image("images/" + row['image'])

with col2:
    for index, row in dataflow[4:8].iterrows():
        st.header(f"{row['first name'].capitalize()} {row['last name'].capitalize()}")
        st.write(row['role'])
        st.image("images/" + row['image'])

with col3:
    for index, row in dataflow[8:].iterrows():
        st.header(f"{row['first name'].capitalize()} {row['last name'].capitalize()}")
        st.write(row['role'])
        st.image("images/" + row['image'])