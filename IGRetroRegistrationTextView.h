
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel;

@interface IGRetroRegistrationTextView : UITextView {

	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) UILabel * placeholderLabel;              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
-(id)initWithPlaceholder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)setShowPlaceholder:(char)arg1 ;
@end

