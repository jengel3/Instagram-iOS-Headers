

@class NSCountedSet, NSMapTable;

@interface IGListDisplayHandler : NSObject {

	NSCountedSet* _visibleListSections;
	NSMapTable* _visibleCellObjectMap;

}

@property (nonatomic,retain) NSCountedSet * visibleListSections;              //@synthesize visibleListSections=_visibleListSections - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleCellObjectMap;               //@synthesize visibleCellObjectMap=_visibleCellObjectMap - In the implementation block
-(void)willDisplayCell:(id)arg1 forListAdapter:(id)arg2 listItemController:(id)arg3 object:(id)arg4 indexPath:(id)arg5 ;
-(void)didEndDisplayingCell:(id)arg1 forListAdapter:(id)arg2 listItemController:(id)arg3 indexPath:(id)arg4 ;
-(NSMapTable *)visibleCellObjectMap;
-(NSCountedSet *)visibleListSections;
-(void)setVisibleListSections:(NSCountedSet *)arg1 ;
-(void)setVisibleCellObjectMap:(NSMapTable *)arg1 ;
-(id)init;
@end

