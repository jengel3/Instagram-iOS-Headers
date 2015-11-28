

@protocol FBGraphObjectPagingLoaderDelegate <NSObject>
@optional
-(void)pagingLoader:(id)arg1 willLoadURL:(id)arg2;
-(void)pagingLoader:(id)arg1 didLoadData:(id)arg2;
-(void)pagingLoaderDidFinishLoading:(id)arg1;
-(void)pagingLoader:(id)arg1 handleError:(id)arg2;
-(void)pagingLoaderWasCancelled:(id)arg1;

@end

