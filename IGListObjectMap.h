

@class NSArray, NSMapTable, NSMutableSet;

@interface IGListObjectMap : NSObject {

	NSArray* _objects;
	NSMapTable* _objectListMap;
	NSMapTable* _listIndexMap;
	NSMutableSet* _registeredListSections;

}

@property (nonatomic,retain) NSArray * objects;                                    //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectListMap;                         //@synthesize objectListMap=_objectListMap - In the implementation block
@property (nonatomic,readonly) NSMapTable * listIndexMap;                          //@synthesize listIndexMap=_listIndexMap - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registeredListSections;              //@synthesize registeredListSections=_registeredListSections - In the implementation block
-(id)listItemControllerForObject:(id)arg1 ;
-(NSMapTable *)listIndexMap;
-(NSMapTable *)objectListMap;
-(NSMutableSet *)registeredListSections;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(id)listForSection:(unsigned)arg1 ;
-(void)updateWithObjects:(id)arg1 listItemControllers:(id)arg2 ;
-(char)hasTypeOfListItemController:(id)arg1 ;
-(id)objectForSection:(unsigned)arg1 ;
-(NSArray *)objects;
-(id)init;
-(void)reset;
-(void)setObjects:(NSArray *)arg1 ;
@end

