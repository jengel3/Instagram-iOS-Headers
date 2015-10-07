/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:08 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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
-(char)isRemovedMedia:(id)arg1 ;
-(void)markMedia:(id)arg1 asRemoved:(char)arg2 ;
-(void)removePoint:(id)arg1 ;
-(void)unremovePoint:(id)arg1 ;
-(void)removeMedia:(id)arg1 ;
-(void)unremoveMedia:(id)arg1 ;
-(void)notifyDelegateThatDeleteRequestFailed:(id)arg1 ;
-(void)commitEditsAfterSuccessfulSubmission;
-(char)isRemovedPoint:(id)arg1 ;
-(void)notifyDelegateThatDeleteRequestFinished;
-(void)ticketCheckRequestFinished:(id)arg1 ;
-(void)notifyDelegateThatDeleteRequestFinishedAfterDelay;
-(int)numPendingEdits;
-(void)submitEdits:(id)arg1 isInReviewMode:(char)arg2 promptForConfirmation:(char)arg3 ;
-(void)onTimeoutTimerFired:(id)arg1 ;
-(void)onTicketCheckTimerFired:(id)arg1 ;
-(void)deleteRequestFailed:(char)arg1 ;
-(int)numberOfRemovedPointsInArray:(id)arg1 ;
-(void)removeAllPointsInArray:(id)arg1 ;
-(void)unremoveAllPointsInArray:(id)arg1 ;
-(char)toggleMediaRemovedState:(id)arg1 ;
-(char)isAnyOfThesePointsRemoved:(id)arg1 ;
-(int)countNumberOfPointsWithRemovedMedia:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGPhotoMapEditManagerDelegate>)arg1 ;
-(id<IGPhotoMapEditManagerDelegate>)delegate;
-(void)cancelEdits;
-(void)commitEdits;
@end

