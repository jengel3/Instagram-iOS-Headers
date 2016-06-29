
#import <UIKit/UIView.h>

@class NSArray;

@interface IGUserDetailView : UIView {

	NSArray* _accessibleElements;

}

@property (nonatomic,retain) NSArray * accessibleElements;              //@synthesize accessibleElements=_accessibleElements - In the implementation block
-(NSArray *)accessibleElements;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
@end

