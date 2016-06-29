

@protocol IGListAdapterUpdaterPerfDelegate <NSObject>
@required
-(void)didCompleteUpdateForListAdapterUpdater:(id)arg1;
-(void)listAdapterUpdater:(id)arg1 updatedWithStats:(IGListAdapterUpdaterPerfStats)arg2;

@end

