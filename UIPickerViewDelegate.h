

@protocol UIPickerViewDelegate <NSObject>
@optional
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
-(id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2;
-(float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;

@end

