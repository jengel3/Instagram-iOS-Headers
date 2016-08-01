
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSpringButton.h>

@interface IGInviteButton : IGSpringButton {

	int _inviteStatus;

}

@property (assign,nonatomic) int inviteStatus;              //@synthesize inviteStatus=_inviteStatus - In the implementation block
-(void)updateInviteStatus:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setInviteStatus:(int)arg1 ;
-(int)inviteStatus;
@end

