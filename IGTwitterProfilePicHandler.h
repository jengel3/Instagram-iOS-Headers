
#import <Instagram/IGActionSheetDelegate.h>

@protocol IGTwitterProfilePictureDelegate;
@class NSString;

@interface IGTwitterProfilePicHandler : NSObject <IGActionSheetDelegate> {

	id<IGTwitterProfilePictureDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<IGTwitterProfilePictureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(id<IGTwitterProfilePictureDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

