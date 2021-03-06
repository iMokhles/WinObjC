/* Copyright (c) 2006-2007 Christopher J. W. Lloyd

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#ifndef _NSPATHUTILITIES_H_
#define _NSPATHUTILITIES_H_

#import <Foundation/NSString.h>
#import <Foundation/NSPathUtilities.h>

@interface NSString(NSString_pathUtilities)

+(NSString *)pathWithComponents:(NSArray *)components;
-(NSArray *)pathComponents;

-(NSString *)lastPathComponent;

-(NSString *)pathExtension;

-(NSString *)stringByAppendingPathComponent:(NSString *)string;
-(NSString *)stringByAppendingPathExtension:(NSString *)string;
-(NSArray *)stringsByAppendingPaths:(NSArray *)paths;

-(NSString *)stringByDeletingLastPathComponent;
-(NSString *)stringByDeletingPathExtension;

-(NSString *)stringByExpandingTildeInPath;
-(NSString *)stringByAbbreviatingWithTildeInPath;

-(NSString *)stringByStandardizingPath;
-(NSString *)stringByResolvingSymlinksInPath;

-(BOOL)isAbsolutePath;

-(const char *)fileSystemRepresentation;
-(const uint16_t *)fileSystemRepresentationW;
-(BOOL)getFileSystemRepresentation:(char *)bytes maxLength:(NSUInteger)maxLength;

-(NSUInteger)completePathIntoString:(NSString **)string caseSensitive:(BOOL)caseSensitive matchesIntoArray:(NSArray **)array filterTypes:(NSArray *)types;

@end

@interface NSArray (NSArrayPathExtensions)

-(NSArray *)pathsMatchingExtensions:(NSArray *)filterTypes;

@end

enum {
   NSUserDomainMask   = 0x0001,
   NSLocalDomainMask  = 0x0002,
   NSNetworkDomainMask= 0x0004,
   NSSystemDomainMask = 0x0008,
   NSAllDomainsMask   = 0xffff,
};
typedef uint32_t NSSearchPathDomainMask;

enum {
   NSApplicationDirectory = 1,
   NSDemoApplicationDirectory,
   NSDeveloperApplicationDirectory,
   NSAdminApplicationDirectory,
   NSLibraryDirectory,
   NSDeveloperDirectory,
   NSUserDirectory,
   NSDocumentationDirectory,
   NSDocumentDirectory,
   NSCoreServiceDirectory,
   NSAutosavedInformationDirectory = 11,
   NSDesktopDirectory = 12,
   NSCachesDirectory = 13,
   NSApplicationSupportDirectory = 14,
   NSDownloadsDirectory = 15,
   NSInputMethodsDirectory = 16,
   NSMoviesDirectory = 17,
   NSMusicDirectory = 18,
   NSPicturesDirectory = 19,
   NSPrinterDescriptionDirectory = 20,
   NSSharedPublicDirectory = 21,
   NSPreferencePanesDirectory = 22,
   NSItemReplacementDirectory = 99,
   NSAllApplicationsDirectory = 100,
   NSAllLibrariesDirectory = 101,
};
typedef uint32_t NSSearchPathDirectory;

FOUNDATION_EXPORT NSArray  *NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory d,NSSearchPathDomainMask mask,BOOL expand);

FOUNDATION_EXPORT NSString *NSHomeDirectory(void);

FOUNDATION_EXPORT NSString *NSTemporaryDirectory(void);
FOUNDATION_EXPORT void NSSetTemporaryDirectory(NSString *path);

FOUNDATION_EXPORT NSString *NSUserName(void);
FOUNDATION_EXPORT NSString *NSFullUserName(void);

#endif /* _NSPATHUTILITIES_H_ */