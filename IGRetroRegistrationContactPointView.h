
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGRetroRegistrationContactPointScrollViewDelegate.h>

@protocol IGRetroRegistrationContactPointViewDelegate;
@class IGRetroRegistrationContactPointScrollView, IGRetroRegistrationBackgroundView, NSString;

@interface IGRetroRegistrationContactPointView : UIView <IGRetroRegistrationContactPointScrollViewDelegate> {

	IGRetroRegistrationContactPointScrollView* _contactPointScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;
	id<IGRetroRegistrationContactPointViewDelegate> _delegate;

}

@property (nonatomic,retain) IGRetroRegistrationContactPointScrollView * contactPointScrollView;              //@synthesize contactPointScrollView=_contactPointScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationContactPointViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createBackgroundView;
-(id)createContactPointScrollView;
-(IGRetroRegistrationContactPointScrollView *)contactPointScrollView;
-(void)contactPointScrollView:(id)arg1 didSelectContactPointType:(int)arg2 wasFirstResponder:(char)arg3 ;
-(void)setContactPointScrollView:(IGRetroRegistrationContactPointScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationContactPointViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<IGRetroRegistrationContactPointViewDelegate>)delegate;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

