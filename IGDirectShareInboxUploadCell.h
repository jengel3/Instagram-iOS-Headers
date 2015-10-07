/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectShareInboxCell.h>

@protocol IGDirectShareInboxUploadCellDelegate;
@class IGUploadModel, UIView, UIProgressView, UIButton, IGKVOHandle;

@interface IGDirectShareInboxUploadCell : IGDirectShareInboxCell {

	IGUploadModel* _uploadModel;
	id<IGDirectShareInboxUploadCellDelegate> _delegate;
	UIView* _previewImageViewOverlay;
	UIProgressView* _progressView;
	UIButton* _retryButton;
	UIButton* _removeButton;
	IGKVOHandle* _uploadStatusObserver;
	IGKVOHandle* _uploadProgressObserver;
	IGKVOHandle* _uploadImageObserver;

}

@property (nonatomic,retain) IGUploadModel * uploadModel;                                           //@synthesize uploadModel=_uploadModel - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectShareInboxUploadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * previewImageViewOverlay;                                      //@synthesize previewImageViewOverlay=_previewImageViewOverlay - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                         //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                                                //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UIButton * removeButton;                                               //@synthesize removeButton=_removeButton - In the implementation block
@property (nonatomic,retain) IGKVOHandle * uploadStatusObserver;                                    //@synthesize uploadStatusObserver=_uploadStatusObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * uploadProgressObserver;                                  //@synthesize uploadProgressObserver=_uploadProgressObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * uploadImageObserver;                                     //@synthesize uploadImageObserver=_uploadImageObserver - In the implementation block
-(UIButton *)retryButton;
-(void)setRetryButton:(UIButton *)arg1 ;
-(IGUploadModel *)uploadModel;
-(void)setUploadModel:(IGUploadModel *)arg1 ;
-(void)removeUpload:(id)arg1 ;
-(void)stopObservers;
-(UIView *)previewImageViewOverlay;
-(void)retryUpload:(id)arg1 ;
-(void)updateLayoutWithStatus:(int)arg1 ;
-(void)setPreviewImageViewOverlay:(UIView *)arg1 ;
-(void)setRemoveButton:(UIButton *)arg1 ;
-(IGKVOHandle *)uploadStatusObserver;
-(void)setUploadStatusObserver:(IGKVOHandle *)arg1 ;
-(IGKVOHandle *)uploadProgressObserver;
-(void)setUploadProgressObserver:(IGKVOHandle *)arg1 ;
-(IGKVOHandle *)uploadImageObserver;
-(void)setUploadImageObserver:(IGKVOHandle *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGDirectShareInboxUploadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGDirectShareInboxUploadCellDelegate>)delegate;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(UIButton *)removeButton;
@end

