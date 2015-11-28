
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

