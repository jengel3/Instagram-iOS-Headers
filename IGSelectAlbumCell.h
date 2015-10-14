/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:53 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class PHFetchResult, UIImage, UILabel, NSString;

@interface IGSelectAlbumCell : UITableViewCell {

	PHFetchResult* _result;
	int _requestID;
	UIImage* _thumbnail;
	UILabel* _accessoryCountLabel;

}

@property (nonatomic,retain) PHFetchResult * result;                     //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) int requestID;                              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) int assetCount; 
@property (nonatomic,retain) UILabel * accessoryCountLabel;              //@synthesize accessoryCountLabel=_accessoryCountLabel - In the implementation block
-(void)setAccessoryCountLabel:(UILabel *)arg1 ;
-(UILabel *)accessoryCountLabel;
-(void)setAssetCount:(int)arg1 ;
-(int)assetCount;
-(int)requestID;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIEdgeInsets)layoutMargins;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(UIImage *)thumbnail;
-(PHFetchResult *)result;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setResult:(PHFetchResult *)arg1 ;
-(void)setRequestID:(int)arg1 ;
@end

