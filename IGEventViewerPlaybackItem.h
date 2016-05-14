/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGEventViewerCellType;
@class IGPost, NSIndexPath, IGFeedItemMediaCell, IGEventViewerVideoCell, IGEventViewerPhotoCell;

@interface IGEventViewerPlaybackItem : NSObject {

	IGPost* _post;
	NSIndexPath* _indexPath;
	IGFeedItemMediaCell*<IGEventViewerCellType> _cell;

}

@property (nonatomic,readonly) IGPost * post;                                                 //@synthesize post=_post - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                       //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) IGFeedItemMediaCell*<IGEventViewerCellType> cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) IGEventViewerVideoCell * videoCell; 
@property (nonatomic,readonly) IGEventViewerPhotoCell * photoCell; 
-(IGPost *)post;
-(char)isValidVideoItem;
-(char)isValidPhotoItem;
-(IGEventViewerPhotoCell *)photoCell;
-(IGEventViewerVideoCell *)videoCell;
-(id)initWithPost:(id)arg1 indexPath:(id)arg2 cell:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSIndexPath *)indexPath;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)cell;
@end
