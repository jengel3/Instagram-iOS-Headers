

@protocol IGTokenizerTextFieldDelegate <UITextFieldDelegate>
@required
-(void)tokenizerTextFieldDidStartQuery;
-(void)tokenizerTextFieldDidUpdateQuery:(id)arg1;
-(void)tokenizerTextFieldDidEndQuery;
-(void)tokenizerTextFieldDidChangeHeight:(id)arg1;
-(void)tokenizerTextFieldDidRemoveToken;

@end

