
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

@interface IGPassThroughGestureRecognizer : UIGestureRecognizer {

	/*^block*/id _touchesBeganCallback;
	/*^block*/id _touchesEndedCallback;
	NSMutableSet* _preventingGestureRecognizers;

}

@property (nonatomic,copy) id touchesBeganCallback;                                    //@synthesize touchesBeganCallback=_touchesBeganCallback - In the implementation block
@property (nonatomic,copy) id touchesEndedCallback;                                    //@synthesize touchesEndedCallback=_touchesEndedCallback - In the implementation block
@property (nonatomic,retain) NSMutableSet * preventingGestureRecognizers;              //@synthesize preventingGestureRecognizers=_preventingGestureRecognizers - In the implementation block
-(void)addPreventingGestureRecognizer:(id)arg1 ;
-(NSMutableSet *)preventingGestureRecognizers;
-(void)setPreventingGestureRecognizers:(NSMutableSet *)arg1 ;
-(void)removePreventingGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(void)setTouchesBeganCallback:(id)arg1 ;
-(void)setTouchesEndedCallback:(id)arg1 ;
-(id)touchesBeganCallback;
-(id)touchesEndedCallback;
@end

