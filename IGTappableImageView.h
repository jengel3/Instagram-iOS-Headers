
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class NSString, IGSimpleButton;

@interface IGTappableImageView : IGImageView {

	NSString* _mediaID;
	IGSimpleButton* _button;

}

@property (nonatomic,copy) NSString * mediaID;                     //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,retain) IGSimpleButton * button;              //@synthesize button=_button - In the implementation block
-(void)onButtonTapped:(id)arg1 ;
-(void)setMediaID:(NSString *)arg1 ;
-(NSString *)mediaID;
-(IGSimpleButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButton:(IGSimpleButton *)arg1 ;
@end

