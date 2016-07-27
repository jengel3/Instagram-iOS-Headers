

@protocol IGListAdapterUpdaterPerfDelegate <NSObject>
@required
-(void)listAdapterUpdater:(id)arg1 updatedWithStats:(IGListAdapterUpdaterPerfStats)arg2;
-(void)didCompleteUpdateForListAdapterUpdater:(id)arg1;

@end

