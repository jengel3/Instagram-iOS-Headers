
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFilter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableIndexSet;

@interface IGFilterGroup : IGFilter <NSCopying> {

	NSMutableArray* _filters;
	unsigned _surfaceIdx;
	NSMutableIndexSet* _disabledFilters;

}
-(id)renderByConsumingSource:(id)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)setFilterAtIndex:(unsigned)arg1 enabled:(char)arg2 ;
-(char)isFilterAtIndexEnabled:(unsigned)arg1 ;
-(void)insertFilter:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)render:(id)arg1 to:(id*)arg2 consumeSource:(char)arg3 ;
-(void)removeLastFilter;
-(void)removeFilterAtIndex:(unsigned)arg1 ;
-(id)firstFilter;
-(id)lastFilter;
-(unsigned)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(void)addFilter:(id)arg1 ;
@end

