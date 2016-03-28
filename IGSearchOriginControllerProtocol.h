

@protocol IGSearchOriginControllerProtocol <NSObject>
@required
-(void)showSearchController;
-(void)resetSearchControllerIfNeeded;
-(void)prepareForPopToRootTransition;

@end

