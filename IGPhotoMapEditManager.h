
#import <Instagram/IGQuadtreeEditManager.h>

@protocol IGPhotoMapEditManagerDelegate;
@class NSMutableDictionary, IGQuadtree, NSString, NSTimer;

@interface IGPhotoMapEditManager : NSObject <IGQuadtreeEditManager> {

	NSMutableDictionary* _committedRemovedMedia;
	NSMutableDictionary* _removedMediaInEditMode;
	char _isInEditMode;
	IGQuadtree* _quadtree;
	char _isInReviewMode;
	char _removalRequestSuccessful;
	NSString* _ticketId;
	NSTimer* _timeoutTimer;
	NSTimer* _ticketCheckTimer;
	double _timeOfRequestStart;
	double _timeOfLastTicketRequest;
	id<IGPhotoMapEditManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGPhotoMapEditManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markMedia:(id)arg1 asRemoved:(char)arg2 ;
-(void)removePoint:(id)arg1 ;
-(void)unremovePoint:(id)arg1 ;
-(void)unremoveMedia:(id)arg1 ;
-(void)notifyDelegateThatDeleteRequestFailed:(id)arg1 ;
-(void)commitEditsAfterSuccessfulSubmission;
-(void)notifyDelegateThatDeleteRequestFinished;
-(void)ticketCheckRequestFinished:(id)arg1 ;
-(void)notifyDelegateThatDeleteRequestFinishedAfterDelay;
-(void)onTimeoutTimerFired:(id)arg1 ;
-(void)onTicketCheckTimerFired:(id)arg1 ;
-(void)deleteRequestFailed:(char)arg1 ;
-(int)countNumberOfPointsWithRemovedMedia:(id)arg1 ;
-(void)unremoveAllPointsInArray:(id)arg1 ;
-(void)removeAllPointsInArray:(id)arg1 ;
-(int)numberOfRemovedPointsInArray:(id)arg1 ;
-(char)isAnyOfThesePointsRemoved:(id)arg1 ;
-(void)removeMedia:(id)arg1 ;
-(int)numPendingEdits;
-(char)toggleMediaRemovedState:(id)arg1 ;
-(void)submitEdits:(id)arg1 isInReviewMode:(char)arg2 promptForConfirmation:(char)arg3 ;
-(char)isRemovedMedia:(id)arg1 ;
-(char)isRemovedPoint:(id)arg1 ;
-(void)setDelegate:(id<IGPhotoMapEditManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGPhotoMapEditManagerDelegate>)delegate;
-(void)cancelEdits;
-(void)commitEdits;
@end

