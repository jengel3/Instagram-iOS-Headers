

@protocol IGFilterCollectionControllerDelegate <NSObject>
@optional
-(void)filterControllerDidSelectAddMoreFilters:(id)arg1;
-(void)filterController:(id)arg1 didScrollToSelectedFilter:(Class)arg2;
-(void)filterControllerDidScroll:(id)arg1;
-(void)filterControllerDidStartReordering:(id)arg1;
-(void)filterControllerDidFinishReordering:(id)arg1;

@required
-(void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(char)arg3 willScroll:(char)arg4;
-(void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2;
-(float)filterController:(id)arg1 filterStrengthForClass:(Class)arg2;

@end

