

@protocol IGVideoTrimControllerDelegate <NSObject>
@required
-(void)videoTrimController:(id)arg1 willBeginUpdatingWithTrimmedRange:(SCD_Struct_IG58)arg2;
-(void)videoTrimController:(id)arg1 didUpdateWithTrimmedRange:(SCD_Struct_IG58)arg2;
-(void)videoTrimController:(id)arg1 didFinishUpdatingWithTrimmedRange:(SCD_Struct_IG58)arg2;

@end

