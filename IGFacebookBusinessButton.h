
#import <Instagram/IGButton.h>

@class UIImageView;

@interface IGFacebookBusinessButton : IGButton {

	UIImageView* _fbIcon;

}

@property (nonatomic,readonly) UIImageView * fbIcon;              //@synthesize fbIcon=_fbIcon - In the implementation block
-(UIImageView *)fbIcon;
-(id)init;
-(void)layoutSubviews;
-(void)setUp;
@end

