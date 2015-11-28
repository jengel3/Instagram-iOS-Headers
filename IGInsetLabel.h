
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UILabel.h>

@interface IGInsetLabel : UILabel {

	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;              //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
+(id)lightLabel;
+(id)darkLabel;
-(id)init;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
@end

