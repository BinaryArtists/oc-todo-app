//
//  string.h
//  FATodos
//
//  Created by 李杰 on 9/16/15.
//  Copyright (c) 2015 fallen.ink. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface s : NSObject

// Utility

@string( APP_ID )

// Operation

@string( Delete )
@string( More )

// Module
@string( ModuleItem ) // 俯卧撑、哑铃
@string( ModuleFourQuadrant ) // 四象限
@string( ModuleMemo )
@string( ModuleNote ) // 便签纪录

// Service

// todo: http://www.oschina.net/p/Voice2Note（懒人笔记）
// 便签显示方式：http://www.oschina.net/p/timeline-for-ios
// 输入方式：
@string( VoiceMemo) // 语音便签
@string( Memo ) // 便签：
@string( Note ) // 笔记：与上面的区别就是，便签可以分类，但不做关联，笔记是可以较少层次的树状分类，和关联

@string( SitsUp ) // 仰卧起坐
@string( Pushup ) // 俯卧撑
@string( Dumbell ) // 哑铃

@end
