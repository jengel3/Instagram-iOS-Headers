
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UITextView;

@interface IGDirectPendingInboxNuxCell : UICollectionViewCell {

	UITextView* _textView;

}

@property (nonatomic,readonly) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(void)configureWithViewModel:(id)arg1 ;
-(void)setupNuxView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITextView *)textView;
@end

