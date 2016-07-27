

@protocol IGVideoTrimConfirmationDelegate <NSObject>
@required
-(void)videoTrimController:(id)arg1 didConfirmTrimmedRange:(SCD_Struct_IG67)arg2;
-(void)videoTrimControllerDidRejectChanges:(id)arg1;

@end

