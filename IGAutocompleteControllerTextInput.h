

@protocol IGAutocompleteControllerTextInput <UITextInputTraits>
@required
-(id)text;
-(void)setText:(id)arg1;
-(id)beginningOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
-(void)setSelectedTextRange:(id)arg1;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)closestPositionToPoint:(CGPoint)arg1;

@end

