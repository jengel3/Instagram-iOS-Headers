
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMapTable;

@interface IGListItemMap : NSObject <NSCopying> {

	NSArray* _items;
	NSMapTable* _itemListMap;
	NSMapTable* _listIndexMap;

}

@property (nonatomic,readonly) NSMapTable * itemListMap;               //@synthesize itemListMap=_itemListMap - In the implementation block
@property (nonatomic,readonly) NSMapTable * listIndexMap;              //@synthesize listIndexMap=_listIndexMap - In the implementation block
@property (nonatomic,retain) NSArray * items;                          //@synthesize items=_items - In the implementation block
-(unsigned)sectionForItem:(id)arg1 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(id)listItemControllerForItem:(id)arg1 ;
-(id)initWithMapTable:(id)arg1 ;
-(id)itemForSection:(unsigned)arg1 ;
-(id)listItemControllerForSection:(unsigned)arg1 ;
-(void)updateWithItems:(id)arg1 listItemControllers:(id)arg2 ;
-(NSMapTable *)listIndexMap;
-(NSMapTable *)itemListMap;
-(void)enumerateItemsAndItemControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)updateItem:(id)arg1 ;
@end

