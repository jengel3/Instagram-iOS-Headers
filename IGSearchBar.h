
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGSearchBarDelegate;
@class IGButton, UIButton, IGTextField, NSString;

@interface IGSearchBar : UIView <UITextFieldDelegate> {

	IGButton* _cancelButton;
	UIButton* _clearButton;
	char _showsCancelButton;
	IGTextField* _textField;
	id<IGSearchBarDelegate> _delegate;

}

@property (nonatomic,retain) IGTextField * textField;                              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) char showsCancelButton;                               //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) int returnKeyType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showCancelButton:(char)arg1 animated:(char)arg2 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<IGSearchBarDelegate>)arg1 ;
-(id)init;
-(id<IGSearchBarDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)isFirstResponder;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(IGTextField *)textField;
-(NSString *)placeholder;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)setTextField:(IGTextField *)arg1 ;
@end

