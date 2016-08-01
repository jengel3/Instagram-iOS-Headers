
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/POPAnimationDelegate.h>

@protocol IGAlbumHuePickerDelegate;
@class NSMutableArray, CAShapeLayer, NSString;

@interface IGAlbumHuePickerView : UIView <POPAnimationDelegate> {

	NSMutableArray* _hueSegments;
	CAShapeLayer* _calloutLayer;
	id<IGAlbumHuePickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGAlbumHuePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gestureUpdated:(id)arg1 ;
-(id)colorAtPoint:(CGPoint)arg1 ;
-(void)showCalloutWithColor:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)updateBaseColorPalette:(id)arg1 ;
-(void)presentWithInitialYOffset:(float)arg1 itemSize:(CGSize)arg2 gestureRecognizer:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumHuePickerDelegate>)arg1 ;
-(id<IGAlbumHuePickerDelegate>)delegate;
-(void)hideCallout;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end

