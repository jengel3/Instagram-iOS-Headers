

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
-(id)removeAttributesInSection:(int)arg1 ;
-(id)removeHeaderAttributesAtIndexPath:(id)arg1 ;
-(id)removeItemAttributesAtIndexPath:(id)arg1 ;
-(id)headerAttributesAtIndexPath:(id)arg1 ;
-(id)itemAttributesAtIndexPath:(id)arg1 ;
-(unsigned)headerCount;
-(void)clearAllData;
-(void)clearEstimatedData;
-(void)invalidateWithUpdateItems:(id)arg1 ;
-(void)saveHeaderAttributes:(id)arg1 ;
-(void)saveItemAttributes:(id)arg1 ;
-(unsigned)itemCount;
-(id)init;
-(id)description;
@end

