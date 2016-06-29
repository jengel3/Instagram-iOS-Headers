
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGDirectPendingRequestButtonDelegate;
@class NSString;

@interface IGDirectPendingRequestButtons : UIView {

	id<IGDirectPendingRequestButtonDelegate> _delegate;
	NSString* _pendingRequestString;

}

@property (assign,nonatomic,__weak) id<IGDirectPendingRequestButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pendingRequestString;                                         //@synthesize pendingRequestString=_pendingRequestString - In the implementation block
+(id)explanationFont;
+(float)heightForString:(id)arg1 andWidth:(float)arg2 ;
-(void)didTapAcceptButton;
-(void)didTapDenyButton;
-(id)initWithFrame:(CGRect)arg1 andString:(id)arg2 ;
-(NSString *)pendingRequestString;
-(void)setPendingRequestString:(NSString *)arg1 ;
-(void)setDelegate:(id<IGDirectPendingRequestButtonDelegate>)arg1 ;
-(id<IGDirectPendingRequestButtonDelegate>)delegate;
@end

