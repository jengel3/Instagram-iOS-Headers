

@protocol IGActionSheetDelegate <NSObject>
@optional
-(void)actionSheetFinishedHiding;

@required
-(void)actionSheetDismissedWithButtonTitled:(id)arg1;

@end

