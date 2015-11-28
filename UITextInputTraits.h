

@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@optional
-(int)keyboardAppearance;
-(void)setSecureTextEntry:(char)arg1;
-(char)isSecureTextEntry;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1;
-(void)setKeyboardAppearance:(int)arg1;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1;

@end

