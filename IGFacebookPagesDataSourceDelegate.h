

@protocol IGFacebookPagesDataSourceDelegate <NSObject>
@required
-(void)pagesDataSource:(id)arg1 didLoadPages:(id)arg2;
-(void)pagesDataSource:(id)arg1 didReceiveError:(id)arg2;

@end

