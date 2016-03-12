

@protocol UITextFieldDelegate <NSObject>
@optional
-(char)textFieldShouldBeginEditing:(id)arg1;
-(void)textFieldDidBeginEditing:(id)arg1;
-(char)textFieldShouldEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
-(char)textFieldShouldClear:(id)arg1;
-(char)textFieldShouldReturn:(id)arg1;

@end

