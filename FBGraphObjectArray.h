/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface FBGraphObjectArray : NSMutableArray {

	NSMutableArray* _jsonArray;

}
-(void)graphObjectifyAll;
-(id)initWrappingArray:(id)arg1 ;
-(id)graphObjectifyAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)reverseObjectEnumerator;
-(id)objectEnumerator;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
@end

