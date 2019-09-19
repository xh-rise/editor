ok 窗口菜单
ok 弹出菜单
ok 拉伸方向判断


对象
组件


图层
对象:
    组件0
    组件1
    组件2

//  工程类
class Project {
public:
    std::vector<GLOBject *> mGameObject;

public:
    const std::string & GetFolderPath() const;
    const std::string & GetFilePath() const;
    bool Load(const std::string & url);
    bool Save(const std::string & url);
    void Free();
}

//  提供二进制序列化/反序列化
//  提供字符串序列化/反序列化
//  序列化接口
class Serializer {
public:
    virtual void Encode(std::ofstream & os) = 0;
    virtual void Decode(std::ifstream & is) = 0;
}

ok  //  event_enum 放进 EventSys
ok  //  event_listen 放进 EventSys
ok  //  parser_tool.h 放进 Serializer
//  UIEventEnum 剥离


需要序列化的对象:
    Project
    GLObject
    Component
