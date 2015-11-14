/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentExpandableCell.h>

@class IGImageProgressView;

@interface IGDirectPhotoExpandableCell : IGDirectContentExpandableCell {

	IGImageProgressView* _photoImageView;

}

@property (nonatomic,retain) IGImageProgressView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(CGSize)photoSizeForWidth:(float)arg1 ;
-(CGSize)photoSizeForHeight:(float)arg1 ;
-(void)setPhotoImageView:(IGImageProgressView *)arg1 ;
-(IGImageProgressView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
@end

