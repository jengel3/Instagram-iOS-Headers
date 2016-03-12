

@class NSArray, NSMapTable, NSMutableSet;

@interface IGListItemMap : NSObject {

	NSArray* _items;
	NSMapTable* _itemListMap;
	NSMapTable* _listIndexMap;
	NSMutableSet* _registeredListSections;

}

@property (nonatomic,retain) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMapTable * itemListMap;                           //@synthesize itemListMap=_itemListMap - In the implementation block
@property (nonatomic,readonly) NSMapTable * listIndexMap;                          //@synthesize listIndexMap=_listIndexMap - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registeredListSections;              //@synthesize registeredListSections=_registeredListSections - In the implementation block
-(unsigned)sectionForItem:(id)arg1 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(id)listItemControllerForItem:(id)arg1 ;
-(NSMapTable *)listIndexMap;
-(NSMapTable *)itemListMap;
-(id)itemForSection:(unsigned)arg1 ;
-(NSMutableSet *)registeredListSections;
-(id)listItemControllerForSection:(unsigned)arg1 ;
-(void)updateWithItems:(id)arg1 listItemControllers:(id)arg2 ;
-(char)hasTypeOfListItemController:(id)arg1 ;
-(void)enumerateItemsAndItemControllersUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)reset;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

