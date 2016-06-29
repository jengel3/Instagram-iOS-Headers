

#import <Instagram/Instagram-Structs.h>
@class NSSet, NSMutableDictionary, NSIndexSet;

@interface IGListVerticalLayoutCache : NSObject {

	NSSet* _lastKnownAttributesInRect;
	NSMutableDictionary* _itemAttributesCache;
	NSMutableDictionary* _headerAttributesCache;
	CGSize _lastKnownContentSize;

}

@property (nonatomic,readonly) NSMutableDictionary * itemAttributesCache;                //@synthesize itemAttributesCache=_itemAttributesCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerAttributesCache;              //@synthesize headerAttributesCache=_headerAttributesCache - In the implementation block
@property (nonatomic,readonly) unsigned headerCount; 
@property (nonatomic,readonly) unsigned itemCount; 
@property (nonatomic,copy) NSSet * lastKnownAttributesInRect;                            //@synthesize lastKnownAttributesInRect=_lastKnownAttributesInRect - In the implementation block
@property (nonatomic,readonly) NSIndexSet * lastKnownVisibleSections; 
@property (assign,nonatomic) CGSize lastKnownContentSize;                                //@synthesize lastKnownContentSize=_lastKnownContentSize - In the implementation block
-(NSMutableDictionary *)headerAttributesCache;
-(NSMutableDictionary *)itemAttributesCache;
-(NSSet *)lastKnownAttributesInRect;
-(id)sortedAttribuesFromCachedAttributes:(id)arg1 ;
-(CGSize)lastKnownContentSize;
-(NSIndexSet *)lastKnownVisibleSections;
-(void)setLastKnownAttributesInRect:(NSSet *)arg1 ;
-(void)removeItemAttributesAtIndexPath:(id)arg1 ;
-(void)removeHeaderAttributesAtIndexPath:(id)arg1 ;
-(unsigned)headerCount;
-(void)clearAllData;
-(void)clearEstimatedData;
-(void)clearLastKnowAttributesInRect;
-(id)headerAttributesAtIndexPath:(id)arg1 ;
-(id)itemAttributesAtIndexPath:(id)arg1 ;
-(void)saveAttributes:(id)arg1 ;
-(void)removeAttributesInSection:(unsigned)arg1 numberOfItems:(int)arg2 ;
-(void)setLastKnownContentSize:(CGSize)arg1 ;
-(void)removeAttributes:(id)arg1 ;
-(unsigned)itemCount;
-(id)init;
-(id)description;
@end

