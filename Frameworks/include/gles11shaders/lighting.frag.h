//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#ifndef LIGHTING_FRAG_H
#define LIGHTING_FRAG_H

static const unsigned char lighting_frag[] = {
    0x0a, 0x23, 0x69, 0x66, 0x20, 0x21, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
    0x64, 0x28, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 0x47, 0x5f, 0x48, 
    0x49, 0x4e, 0x54, 0x29, 0x0a, 0x09, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 
    0x65, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 0x47, 0x5f, 0x48, 
    0x49, 0x4e, 0x54, 0x20, 0x2d, 0x31, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 
    0x66, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x21, 0x64, 0x65, 0x66, 0x69, 
    0x6e, 0x65, 0x64, 0x28, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x5f, 0x4d, 0x4f, 
    0x44, 0x45, 0x4c, 0x5f, 0x54, 0x57, 0x4f, 0x5f, 0x53, 0x49, 0x44, 0x45, 
    0x5f, 0x45, 0x4e, 0x41, 0x42, 0x4c, 0x45, 0x44, 0x29, 0x0a, 0x09, 0x23, 
    0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 
    0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x4c, 0x5f, 0x54, 0x57, 0x4f, 0x5f, 0x53, 
    0x49, 0x44, 0x45, 0x5f, 0x45, 0x4e, 0x41, 0x42, 0x4c, 0x45, 0x44, 0x20, 
    0x2d, 0x31, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x2f, 
    0x2f, 0x20, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x0a, 0x75, 
    0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x75, 
    0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x48, 0x69, 0x6e, 
    0x74, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x62, 
    0x6f, 0x6f, 0x6c, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x4d, 
    0x6f, 0x64, 0x65, 0x6c, 0x54, 0x77, 0x6f, 0x53, 0x69, 0x64, 0x65, 0x45, 
    0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 
    0x6f, 0x72, 0x6d, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x75, 0x5f, 0x6c, 0x69, 
    0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 0x75, 0x72, 0x61, 
    0x63, 0x79, 0x3b, 0x0a, 0x0a, 0x2f, 0x2f, 0x20, 0x56, 0x61, 0x72, 0x79, 
    0x69, 0x6e, 0x67, 0x73, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 
    0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x62, 0x61, 0x63, 0x6b, 
    0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x0a, 0x2f, 0x2f, 0x20, 0x46, 
    0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x0a, 0x76, 0x65, 0x63, 
    0x34, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x50, 0x65, 0x72, 0x46, 0x72, 0x61, 
    0x67, 0x6d, 0x65, 0x6e, 0x74, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 
    0x67, 0x28, 0x29, 0x3b, 0x0a, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 
    0x63, 0x61, 0x6c, 0x63, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 
    0x28, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x63, 0x6f, 
    0x6c, 0x6f, 0x72, 0x29, 0x0a, 0x7b, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x4c, 
    0x49, 0x47, 0x48, 0x54, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x4c, 0x5f, 0x54, 
    0x57, 0x4f, 0x5f, 0x53, 0x49, 0x44, 0x45, 0x5f, 0x45, 0x4e, 0x41, 0x42, 
    0x4c, 0x45, 0x44, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x20, 0x7c, 0x7c, 0x20, 
    0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x4c, 
    0x5f, 0x54, 0x57, 0x4f, 0x5f, 0x53, 0x49, 0x44, 0x45, 0x5f, 0x45, 0x4e, 
    0x41, 0x42, 0x4c, 0x45, 0x44, 0x20, 0x3d, 0x3d, 0x20, 0x2d, 0x31, 0x0a, 
    0x09, 0x23, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x5f, 0x4d, 
    0x4f, 0x44, 0x45, 0x4c, 0x5f, 0x54, 0x57, 0x4f, 0x5f, 0x53, 0x49, 0x44, 
    0x45, 0x5f, 0x45, 0x4e, 0x41, 0x42, 0x4c, 0x45, 0x44, 0x20, 0x3d, 0x3d, 
    0x20, 0x2d, 0x31, 0x0a, 0x09, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x6c, 
    0x69, 0x67, 0x68, 0x74, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x54, 0x77, 0x6f, 
    0x53, 0x69, 0x64, 0x65, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x29, 
    0x20, 0x7b, 0x0a, 0x09, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x09, 
    0x69, 0x66, 0x20, 0x28, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x6f, 0x6e, 0x74, 
    0x46, 0x61, 0x63, 0x69, 0x6e, 0x67, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 
    0x23, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 0x47, 
    0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 
    0x5f, 0x46, 0x41, 0x53, 0x54, 0x45, 0x53, 0x54, 0x0a, 0x09, 0x09, 0x63, 
    0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x66, 0x72, 0x6f, 
    0x6e, 0x74, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 0x09, 0x23, 
    0x65, 0x6c, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 
    0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 
    0x4c, 0x5f, 0x4e, 0x49, 0x43, 0x45, 0x53, 0x54, 0x0a, 0x09, 0x09, 0x63, 
    0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x50, 
    0x65, 0x72, 0x46, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x4c, 0x69, 
    0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 0x0a, 0x09, 0x09, 
    0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 
    0x4e, 0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x2d, 
    0x31, 0x0a, 0x09, 0x09, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 
    0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 0x75, 0x72, 0x61, 
    0x63, 0x79, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x46, 0x41, 
    0x53, 0x54, 0x45, 0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x09, 
    0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x66, 0x72, 
    0x6f, 0x6e, 0x74, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 0x09, 
    0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x69, 0x66, 0x20, 0x28, 0x75, 
    0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 
    0x75, 0x72, 0x61, 0x63, 0x79, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 
    0x5f, 0x4e, 0x49, 0x43, 0x45, 0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 
    0x09, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 
    0x6c, 0x63, 0x50, 0x65, 0x72, 0x46, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 
    0x74, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 
    0x0a, 0x09, 0x09, 0x7d, 0x0a, 0x09, 0x09, 0x23, 0x65, 0x6e, 0x64, 0x69, 
    0x66, 0x0a, 0x09, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 
    0x09, 0x09, 0x23, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 
    0x4e, 0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 
    0x47, 0x4c, 0x5f, 0x46, 0x41, 0x53, 0x54, 0x45, 0x53, 0x54, 0x0a, 0x09, 
    0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x62, 
    0x61, 0x63, 0x6b, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 0x09, 
    0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 
    0x4e, 0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 
    0x47, 0x4c, 0x5f, 0x4e, 0x49, 0x43, 0x45, 0x53, 0x54, 0x0a, 0x09, 0x09, 
    0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 
    0x50, 0x65, 0x72, 0x46, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x4c, 
    0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 0x0a, 0x09, 
    0x09, 0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 
    0x49, 0x4e, 0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 
    0x2d, 0x31, 0x0a, 0x09, 0x09, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x6c, 
    0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 0x75, 0x72, 
    0x61, 0x63, 0x79, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x46, 
    0x41, 0x53, 0x54, 0x45, 0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 
    0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x62, 
    0x61, 0x63, 0x6b, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 0x09, 
    0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x69, 0x66, 0x20, 0x28, 0x75, 
    0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 
    0x75, 0x72, 0x61, 0x63, 0x79, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 
    0x5f, 0x4e, 0x49, 0x43, 0x45, 0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 
    0x09, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 
    0x6c, 0x63, 0x50, 0x65, 0x72, 0x46, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 
    0x74, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 
    0x0a, 0x09, 0x09, 0x7d, 0x0a, 0x09, 0x09, 0x23, 0x65, 0x6e, 0x64, 0x69, 
    0x66, 0x0a, 0x09, 0x7d, 0x0a, 0x09, 0x23, 0x69, 0x66, 0x20, 0x4c, 0x49, 
    0x47, 0x48, 0x54, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x4c, 0x5f, 0x54, 0x57, 
    0x4f, 0x5f, 0x53, 0x49, 0x44, 0x45, 0x5f, 0x45, 0x4e, 0x41, 0x42, 0x4c, 
    0x45, 0x44, 0x20, 0x3d, 0x3d, 0x20, 0x2d, 0x31, 0x0a, 0x09, 0x7d, 0x20, 
    0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x23, 0x69, 0x66, 
    0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 0x47, 0x5f, 0x48, 0x49, 
    0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x46, 0x41, 
    0x53, 0x54, 0x45, 0x53, 0x54, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 
    0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x66, 0x72, 0x6f, 0x6e, 0x74, 0x43, 
    0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 0x09, 0x23, 0x65, 0x6c, 0x69, 
    0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 0x47, 0x5f, 0x48, 
    0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x4e, 
    0x49, 0x43, 0x45, 0x53, 0x54, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 
    0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x50, 0x65, 0x72, 0x46, 
    0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x4c, 0x69, 0x67, 0x68, 0x74, 
    0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x23, 0x65, 0x6c, 
    0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 0x47, 0x5f, 
    0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x2d, 0x31, 0x0a, 0x09, 
    0x09, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 
    0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 0x75, 0x72, 0x61, 0x63, 0x79, 0x20, 
    0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x46, 0x41, 0x53, 0x54, 0x45, 
    0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x09, 0x63, 0x6f, 0x6c, 
    0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x66, 0x72, 0x6f, 0x6e, 0x74, 
    0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 0x09, 0x7d, 0x20, 0x65, 
    0x6c, 0x73, 0x65, 0x20, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 
    0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 0x75, 0x72, 0x61, 
    0x63, 0x79, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x4e, 0x49, 
    0x43, 0x45, 0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x09, 0x63, 
    0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x50, 
    0x65, 0x72, 0x46, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x4c, 0x69, 
    0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 0x0a, 0x09, 0x09, 
    0x7d, 0x0a, 0x09, 0x09, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x09, 
    0x7d, 0x0a, 0x09, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x65, 
    0x6c, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x5f, 0x4d, 0x4f, 
    0x44, 0x45, 0x4c, 0x5f, 0x54, 0x57, 0x4f, 0x5f, 0x53, 0x49, 0x44, 0x45, 
    0x5f, 0x45, 0x4e, 0x41, 0x42, 0x4c, 0x45, 0x44, 0x20, 0x3d, 0x3d, 0x20, 
    0x30, 0x0a, 0x09, 0x23, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 
    0x49, 0x4e, 0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 
    0x5f, 0x47, 0x4c, 0x5f, 0x46, 0x41, 0x53, 0x54, 0x45, 0x53, 0x54, 0x0a, 
    0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x66, 
    0x72, 0x6f, 0x6e, 0x74, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 
    0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 
    0x4e, 0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 
    0x47, 0x4c, 0x5f, 0x4e, 0x49, 0x43, 0x45, 0x53, 0x54, 0x0a, 0x09, 0x63, 
    0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x50, 
    0x65, 0x72, 0x46, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x4c, 0x69, 
    0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 0x0a, 0x09, 0x23, 
    0x65, 0x6c, 0x69, 0x66, 0x20, 0x4c, 0x49, 0x47, 0x48, 0x54, 0x49, 0x4e, 
    0x47, 0x5f, 0x48, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x2d, 0x31, 
    0x0a, 0x09, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 
    0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 0x75, 0x72, 0x61, 0x63, 0x79, 
    0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x46, 0x41, 0x53, 0x54, 
    0x45, 0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6c, 
    0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x66, 0x72, 0x6f, 0x6e, 0x74, 
    0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x09, 0x09, 0x7d, 0x20, 0x65, 
    0x6c, 0x73, 0x65, 0x20, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 
    0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x41, 0x63, 0x63, 0x75, 0x72, 0x61, 
    0x63, 0x79, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x4e, 0x49, 
    0x43, 0x45, 0x53, 0x54, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x63, 0x6f, 0x6c, 
    0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x50, 0x65, 0x72, 
    0x46, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x4c, 0x69, 0x67, 0x68, 
    0x74, 0x69, 0x6e, 0x67, 0x28, 0x29, 0x3b, 0x0a, 0x09, 0x7d, 0x0a, 0x09, 
    0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 
    0x66, 0x0a, 0x7d, 0x0a, 0x0a
};

#endif
