
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGSurveryPrimerViewDelegate;
@interface IGSurveyPrimerView : UIView {

	id<IGSurveryPrimerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGSurveryPrimerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)labelTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSurveryPrimerViewDelegate>)arg1 ;
-(id<IGSurveryPrimerViewDelegate>)delegate;
@end

