

@class NSCountedSet, NSMapTable;

@interface IGListDisplayHandler : NSObject {

	NSCountedSet* _visibleListSections;
	NSMapTable* _visibleCellListMap;
	NSMapTable* _visibleCellObjectMap;

}

@property (nonatomic,retain) NSCountedSet * visibleListSections;              //@synthesize visibleListSections=_visibleListSections - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleCellListMap;                 //@synthesize visibleCellListMap=_visibleCellListMap - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleCellObjectMap;               //@synthesize visibleCellObjectMap=_visibleCellObjectMap - In the implementation block
-(NSMapTable *)visibleCellListMap;
-(NSMapTable *)visibleCellObjectMap;
-(NSCountedSet *)visibleListSections;
-(void)setVisibleListSections:(NSCountedSet *)arg1 ;
-(void)setVisibleCellListMap:(NSMapTable *)arg1 ;
-(void)setVisibleCellObjectMap:(NSMapTable *)arg1 ;
-(void)willDisplayCell:(id)arg1 inListAdapter:(id)arg2 forListItemController:(id)arg3 object:(id)arg4 atIndexPath:(id)arg5 ;
-(void)didEndDisplayingCell:(id)arg1 inListAdapter:(id)arg2 atIndexPath:(id)arg3 ;
-(id)init;
@end

