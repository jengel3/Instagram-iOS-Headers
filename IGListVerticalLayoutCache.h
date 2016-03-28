

@class NSMutableDictionary;

@interface IGListVerticalLayoutCache : NSObject {

	NSMutableDictionary* _itemAttributesCache;
	NSMutableDictionary* _headerAttributesCache;

}

@property (nonatomic,readonly) unsigned headerCount; 
@property (nonatomic,readonly) unsigned itemCount; 
@property (nonatomic,readonly) NSMutableDictionary * itemAttributesCache;                //@synthesize itemAttributesCache=_itemAttributesCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerAttributesCache;              //@synthesize headerAttributesCache=_headerAttributesCache - In the implementation block
-(NSMutableDictionary *)headerAttributesCache;
-(NSMutableDictionary *)itemAttributesCache;
-(id)sortedAttribuesFromCachedAttributes:(id)arg1 ;
-(void)removeItemAttributesAtIndexPath:(id)arg1 ;
-(void)removeHeaderAttributesAtIndexPath:(id)arg1 ;
-(void)removeAttributesInSection:(int)arg1 ;
-(unsigned)headerCount;
-(void)clearAllData;
-(void)clearEstimatedData;
-(void)invalidateElementsAtIndexPaths:(id)arg1 ;
-(id)headerAttributesAtIndexPath:(id)arg1 ;
-(id)itemAttributesAtIndexPath:(id)arg1 ;
-(void)saveAttributes:(id)arg1 ;
-(unsigned)itemCount;
-(id)init;
-(id)description;
@end

