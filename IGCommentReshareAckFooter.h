
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UILabel.h>

@interface IGCommentReshareAckFooter : UILabel {

	/*^block*/id _tapActionBlock;

}

@property (copy) id tapActionBlock;              //@synthesize tapActionBlock=_tapActionBlock - In the implementation block
-(void)setTapActionBlock:(id)arg1 ;
-(id)tapActionBlock;
-(void)didTapLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 usernames:(id)arg2 tapActionBlock:(/*^block*/id)arg3 ;
@end

