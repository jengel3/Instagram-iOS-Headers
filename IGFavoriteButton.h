
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSpringButton.h>

@class IGUser;

@interface IGFavoriteButton : IGSpringButton {

	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;              //@synthesize user=_user - In the implementation block
-(void)onFavoriteTapped:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)sizeToFit;
-(void)setHighlighted:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateState;
@end

