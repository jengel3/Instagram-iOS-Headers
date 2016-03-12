

@protocol IGFetchedResultsControllerDelegate <NSObject>
@optional
-(void)fetchedResultsController:(id)arg1 willAddObjects:(id)arg2 updateObjects:(id)arg3;

@required
-(void)fetchedResultsController:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3;

@end

